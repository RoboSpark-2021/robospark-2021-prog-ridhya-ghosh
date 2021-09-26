// ignore_for_file: use_key_in_widget_constructors, prefer_const_constructors

import 'package:flutter/material.dart';
import '../widgets/imagecontainer.dart';
import '../widgets/stats.dart';
import '../widgets/bio.dart';
import '../widgets/condition.dart';

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Center(child: Text("My Profile")),
      ),
      body: Container(
        padding: EdgeInsets.all(30.0),
        decoration: BoxDecoration(
          color: Colors.grey.shade300,
        ),
        child: Center(
          child: Card(
            elevation: 50,
            shadowColor: Colors.black,
            color: Colors.white,
            child: Column(
              children: [
                ImageContainer(),
                Container(
                  margin: EdgeInsets.only(top: 30),
                  child: Text(
                    "Omkar Mudkanna",
                    style: TextStyle(
                      color: Colors.black,
                      fontSize: 20,
                      fontWeight: FontWeight.w500,
                    ),
                  ),
                ),
                Stats(),
                Bio(),
                Condition(),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
