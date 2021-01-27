Goldminenode config
=======================

ARC allows controlling multiple remote goldminenodes from a single wallet. The wallet needs to have a valid collateral output of 1000 coins for each goldminenode and uses a configuration file named `goldminenode.conf` which can be found in the following data directory (depending on your operating system):
 * Windows: %APPDATA%\Arc\
 * Mac OS: ~/Library/Application Support/Arc/
 * Unix/Linux: ~/.arc/

`goldminenode.conf` is a space separated text file. Each line consists of an alias, IP address followed by port, goldminenode private key, collateral output transaction id and collateral output index.

Example:
```
mn1 127.0.0.2:17209 93HaYBVUCYjEMeeH1Y4sBGLALQZE1Yc1K64xiqgX37tGBDQL8Xg 7603c20a05258c208b58b0a0d77603b9fc93d47cfa403035f87f3ce0af814566 0
mn2 127.0.0.4:17209 92Da1aYg6sbenP6uwskJgEY2XWB5LwJ7bXRqc3UPeShtHWJDjDv 5d898e78244f3206e0105f421cdb071d95d111a51cd88eb5511fc0dbf4bfd95f 1
```

In the example above:
* the collateral of 1000 ARC for `mn1` is output `0` of transaction [7603c20a05258c208b58b0a0d77603b9fc93d47cfa403035f87f3ce0af814566](https://test.explorer.arc.org/tx/7603c20a05258c208b58b0a0d77603b9fc93d47cfa403035f87f3ce0af814566)
* the collateral of 1000 ARC for `mn2` is output `1` of transaction [5d898e78244f3206e0105f421cdb071d95d111a51cd88eb5511fc0dbf4bfd95f](https://test.explorer.arc.org/tx/5d898e78244f3206e0105f421cdb071d95d111a51cd88eb5511fc0dbf4bfd95f)

_Note: IPs like 127.0.0.* are not allowed actually, we are using them here for explanatory purposes only. Make sure you have real reachable remote IPs in you `goldminenode.conf`._

The following RPC commands are available (type `help goldminenode` in Console for more info):
* list-conf
* start-alias \<alias\>
* start-all
* start-missing
* start-disabled
* outputs
