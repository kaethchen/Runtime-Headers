@interface BNEPControl : NSObject

+ (int)connect:(id)a0 service:(unsigned short)a1;
+ (void)createEthernetController;
+ (int)disconnect:(id)a0 service:(unsigned short)a1;

@end
