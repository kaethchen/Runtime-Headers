@class NSString;

@interface _NSIdentifierDifferMovePair : NSObject <_NSIdentifierDifferMovePair, NSCopying>

@property (nonatomic) long long fromIndex;
@property (nonatomic) long long toIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithFromIndex:(long long)a0 toIndex:(long long)a1;

@end
