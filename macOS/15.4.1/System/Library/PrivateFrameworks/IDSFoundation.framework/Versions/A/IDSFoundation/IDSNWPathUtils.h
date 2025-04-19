@class NSMutableDictionary;

@interface IDSNWPathUtils : NSObject {
    NSMutableDictionary *_sessionIDToSlicingPathEvaluator;
    NSMutableDictionary *_sessionIDToSlicingBitMask;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)filterVirtualInterfaces:(char *)a0;
- (id)getDefaultPath;
- (BOOL)isVoWiFiInterface:(char *)a0;

@end
