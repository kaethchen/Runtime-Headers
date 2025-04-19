@class NSString, NSArray;

@interface BSCanonicalOrientationMapResolver : NSObject <BSInterfaceOrientationMapResolving, BSXPCSecureCoding> {
    long long _targetOrientation;
    long long _currentOrientation;
    NSArray *_fallbackOrientations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithTargetOrientation:(long long)a0 currentOrientation:(long long)a1;
- (id)initWithTargetOrientation:(long long)a0 currentOrientation:(long long)a1 fallbackOrientations:(id)a2;
- (long long)interfaceOrientationForSupportedOrientations:(unsigned long long)a0 preferredOrientation:(long long)a1;

@end
