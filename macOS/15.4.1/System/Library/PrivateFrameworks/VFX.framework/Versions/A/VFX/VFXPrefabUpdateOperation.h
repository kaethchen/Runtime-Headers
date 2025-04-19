@class VFXNode;

@interface VFXPrefabUpdateOperation : NSObject

@property (nonatomic) long long operation;
@property (retain, nonatomic) VFXNode *source;
@property (retain, nonatomic) VFXNode *destination;

@end
