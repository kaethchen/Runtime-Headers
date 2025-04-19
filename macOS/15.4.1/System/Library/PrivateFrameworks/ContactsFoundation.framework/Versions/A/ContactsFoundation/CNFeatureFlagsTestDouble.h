@class NSString, NSMutableDictionary;
@protocol CNFeatureFlags;

@interface CNFeatureFlagsTestDouble : NSObject <CNFeatureFlags> {
    NSMutableDictionary *_featureFlags;
    id<CNFeatureFlags> _fallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
