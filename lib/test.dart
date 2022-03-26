import 'package:flutter/material.dart';

class TestPage extends StatefulWidget {
  const TestPage({Key? key}) : super(key: key);
  @override
  State<TestPage> createState() => _TestPageState();
}

class _TestPageState extends State<TestPage> {
  Widget testQuestion(String question) => Container(
        child: Column(children: [
          Text(question),
          const SizedBox(height: 15),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [
              Column(
                children: [
                  const Text('Highly Disagree'),
                  Checkbox(shape: CircleBorder(), value: true, onChanged: null)
                ],
              ),
              Column(
                children: [
                  const Text('Disagree'),
                  Checkbox(shape: CircleBorder(), value: true, onChanged: null)
                ],
              ),
              Column(
                children: [
                  const Text('Neutral'),
                  Checkbox(shape: CircleBorder(), value: true, onChanged: null)
                ],
              ),
              Column(
                children: [
                  const Text('Agree'),
                  Checkbox(shape: CircleBorder(), value: true, onChanged: null)
                ],
              ),
              Column(
                children: [
                  const Text('Highly Agree'),
                  Checkbox(shape: CircleBorder(), value: true, onChanged: null)
                ],
              )
            ],
          ),
          const SizedBox(height: 30)
        ]),
      );

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: Center(
      child: Container(
          height: MediaQuery.of(context).size.height,
          width: MediaQuery.of(context).size.width,
          decoration: const BoxDecoration(
              gradient: LinearGradient(
            begin: Alignment.topRight,
            end: Alignment.bottomLeft,
            colors: [
              Colors.blue,
              Colors.red,
            ],
          )),
          child: SingleChildScrollView(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                const SizedBox(height: 50),
                Align(
                  child: Container(
                    width: 900,
                    decoration: BoxDecoration(
                      color: Theme.of(context).colorScheme.secondary,
                      border: Border.all(
                        color: Colors.black,
                      ),
                      borderRadius:
                          const BorderRadius.all(Radius.circular(20.0)),
                    ),
                    child: Padding(
                      padding: const EdgeInsets.all(10.0),
                      child: Column(children: [
                        testQuestion('question1'),
                        testQuestion('question2'),
                        testQuestion('question3'),
                        testQuestion('question4'),
                        testQuestion('question4'),
                        testQuestion('question4'),
                        testQuestion('question4'),
                        testQuestion('question4'),
                        testQuestion('question4'),
                        testQuestion('question4'),
                      ]),
                    ),
                  ),
                ),
                const SizedBox(height: 30),
                ClipRRect(
                  borderRadius: BorderRadius.circular(4),
                  child: Stack(
                    children: <Widget>[
                      Positioned.fill(
                        child: Container(
                          decoration: const BoxDecoration(
                            gradient: LinearGradient(
                              colors: <Color>[
                                Color(0xFF0D47A1),
                                Color(0xFF1976D2),
                                Color(0xFF42A5F5),
                              ],
                            ),
                          ),
                        ),
                      ),
                      TextButton(
                        style: TextButton.styleFrom(
                          padding: const EdgeInsets.all(16.0),
                          primary: Colors.white,
                          textStyle: const TextStyle(fontSize: 20),
                        ),
                        onPressed: () {
                          // Navigator.push(
                          //     context,
                          //     MaterialPageRoute(
                          //         builder: ((context) => const TestPage())));
                        },
                        child: const Text('Submit'),
                      ),
                    ],
                  ),
                ),
                const SizedBox(height: 40)
              ],
            ),
          )),
    ));
  }
}
