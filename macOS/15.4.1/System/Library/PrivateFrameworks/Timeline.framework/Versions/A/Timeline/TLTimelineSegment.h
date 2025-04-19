@class TLTimelineEntryNode;

@interface TLTimelineSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TLTimelineEntryNode *leftmostNode;
@property (readonly, nonatomic) TLTimelineEntryNode *rightmostNode;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsNode:(id)a0;
- (BOOL)contractFromLeft;
- (BOOL)contractFromRight;
- (BOOL)expandToLeft;
- (BOOL)expandToRight;
- (id)initWithLeftmostNode:(id)a0 rightmostNode:(id)a1 count:(unsigned long long)a2;
- (BOOL)shiftLeft;
- (BOOL)shiftRight;

@end
