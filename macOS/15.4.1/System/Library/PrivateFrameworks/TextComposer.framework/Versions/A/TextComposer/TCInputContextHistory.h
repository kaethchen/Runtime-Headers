@class TIInputContextHistory;

@interface TCInputContextHistory : NSObject <NSSecureCoding, NSCopying> {
    TIInputContextHistory *_tiInputContextHistory;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) TIInputContextHistory *tiInputContextHistory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTIInputContextHistory:(id)a0;
- (id)mostRecentTextEntriesWithCount:(long long)a0;

@end
