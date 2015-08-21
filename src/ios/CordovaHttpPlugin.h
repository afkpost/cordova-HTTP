#import <Foundation/Foundation.h>

#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVJSON.h>

@interface CordovaHttpPlugin : CDVPlugin

- (void)setHeader:(CDVInvokedUrlCommand*)command;
- (void)get:(CDVInvokedUrlCommand*)command;

@end