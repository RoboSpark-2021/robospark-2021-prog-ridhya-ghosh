// ignore_for_file: use_key_in_widget_constructors, prefer_const_constructors

import 'package:flutter/material.dart';

class Stats extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Container(
      margin: EdgeInsets.only(top: 20, left: 10, right: 10),
      padding: EdgeInsets.only(top: 10, left: 30, right: 30),
      child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceBetween,
        children: const [
          Stat("Posts", 3),
          Stat("Followers", 601),
          Stat("Following", 555),
        ],
      ),
    );
  }
}

class Stat extends StatelessWidget {
  final String _type;
  final int _count;

  const Stat(this._type, this._count);

  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Text(
          _count.toString(),
          style: TextStyle(
            color: Colors.black,
            fontSize: 18,
            fontWeight: FontWeight.bold,
          ),
        ),
        Text(
          _type.toString(),
          style: TextStyle(
            color: Colors.black,
            fontSize: 12,
            fontWeight: FontWeight.w500,
          ),
        ),
      ],
    );
  }
}
