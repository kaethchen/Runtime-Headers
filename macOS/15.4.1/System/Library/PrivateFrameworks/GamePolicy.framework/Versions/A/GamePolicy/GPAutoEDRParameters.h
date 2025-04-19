@interface GPAutoEDRParameters : NSObject

@property BOOL autoEDRAllowed;
@property (getter=referenceViewingEnvironment) long long referenceViewingEnvironment;
@property (getter=surroundXNits) double surroundXNits;
@property (getter=surroundYNits) double surroundYNits;
@property (getter=surroundZNits) double surroundZNits;
@property (getter=displayReferenceXNits) double displayReferenceXNits;
@property (getter=displayReferenceYNits) double displayReferenceYNits;
@property (getter=displayReferenceZNits) double displayReferenceZNits;

+ (id)autoEDRParameters;

- (id)init;
- (void)readAppPlist;

@end
