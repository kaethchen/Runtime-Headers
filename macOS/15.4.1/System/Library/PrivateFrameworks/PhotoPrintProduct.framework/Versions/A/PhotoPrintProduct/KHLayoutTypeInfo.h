@class NSString;

@interface KHLayoutTypeInfo : NSObject

@property (readonly, nonatomic) unsigned long long layoutType;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) long long holeCount;

- (BOOL)isEqual:(id)a0;
- (id)initWithLayoutType:(unsigned long long)a0;
- (BOOL)isEqualToLayoutTypeInfo:(id)a0;

@end
