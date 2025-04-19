@class UISSlotStyle, SLDSlotTag;

@interface SLDRemoteViewIdentifier : NSObject

@property (retain, nonatomic) UISSlotStyle *style;
@property (retain, nonatomic) SLDSlotTag *tag;

+ (id)identifierForStyle:(id)a0 tag:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(id)a0 tag:(id)a1;

@end
