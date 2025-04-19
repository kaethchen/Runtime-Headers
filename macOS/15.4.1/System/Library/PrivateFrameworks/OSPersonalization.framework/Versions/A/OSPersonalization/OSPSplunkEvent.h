@class NSString, NSMutableDictionary;

@interface OSPSplunkEvent : NSObject

@property (retain) NSMutableDictionary *dict;
@property (retain) NSString *uuid;

+ (id)_compressedTSSRequestStringFromBundle:(id)a0;
+ (id)tssRequestFromBundle:(id)a0 ticketType:(id)a1 train:(id)a2 build:(id)a3 variant:(id)a4 device:(id)a5 productionMode:(BOOL)a6 securityMode:(BOOL)a7 result:(int)a8;

- (id)init;
- (void).cxx_destruct;
- (void)send;

@end
