@class NSMutableData;
@protocol TANotificationDelegate;

@interface TAManagerProxy : NSObject {
    NSMutableData *_performCommandBufferData;
    BOOL _performCommandBufferInUse;
}

@property (retain) id<TANotificationDelegate> delegate;

+ (id)proxy;
+ (BOOL)isSupportedBridgePlatform;
+ (BOOL)isSupportedNonBridgePlatform;

- (id)init;
- (void).cxx_destruct;
- (void)cleanupCommand:(id)a0;
- (int)performCommand:(unsigned short)a0 inValue:(unsigned int)a1 inData:(const void *)a2 inSize:(unsigned long long)a3 outData:(void *)a4 outSize:(unsigned long long *)a5;
- (int)performCommand:(unsigned short)a0 method:(unsigned int)a1 inValue:(unsigned short)a2 inData:(const void *)a3 inSize:(unsigned long long)a4 outData:(void *)a5 outSize:(unsigned long long *)a6;
- (int)performCommand:(unsigned short)a0 method:(unsigned int)a1 version:(unsigned short)a2 inValue:(unsigned short)a3 inData:(const void *)a4 inSize:(unsigned long long)a5 outData:(void *)a6 outSize:(unsigned long long *)a7;
- (int)prepareCommand:(unsigned short)a0 version:(unsigned short)a1 inValue:(unsigned short)a2 inData:(const void *)a3 inSize:(unsigned long long)a4 command:(id *)a5;

@end
