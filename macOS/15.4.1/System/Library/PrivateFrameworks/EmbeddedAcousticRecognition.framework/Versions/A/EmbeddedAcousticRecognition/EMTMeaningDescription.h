@class NSString;

@interface EMTMeaningDescription : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *definition;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;

@end
