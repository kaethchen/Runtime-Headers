@class NSString;

@interface AKAlignmentGuide : NSObject <NSInputAlignmentGuide>

@property double locationInWindow;
@property double locationInModel;
@property BOOL isHorizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referenceValues;
- (long long)guideType;

@end
