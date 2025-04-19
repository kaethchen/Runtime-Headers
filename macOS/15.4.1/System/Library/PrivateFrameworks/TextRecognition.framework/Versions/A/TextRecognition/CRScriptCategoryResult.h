@class NSObject;
@protocol CRScriptCategory;

@interface CRScriptCategoryResult : NSObject <NSCopying>

@property (readonly) NSObject<CRScriptCategory> *scriptCategory;
@property (readonly) float probability;
@property (readonly) BOOL valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithScriptCategory:(id)a0 probability:(float)a1;

@end
