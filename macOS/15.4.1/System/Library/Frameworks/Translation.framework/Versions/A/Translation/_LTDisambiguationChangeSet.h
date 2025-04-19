@class NSString, NSNumber;

@interface _LTDisambiguationChangeSet : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *meaningDescription;
@property (readonly, copy, nonatomic) NSNumber *genderNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addUserSelection:(id)a0;
- (BOOL)hasAnyChangeOfType:(unsigned long long)a0;

@end
