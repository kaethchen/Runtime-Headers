@class ATXComplication, NSArray;

@interface ATXComplicationsSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ATXComplication *subtitleComplication;
@property (readonly, nonatomic) long long layoutType;
@property (readonly, copy, nonatomic) NSArray *complications;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSubtitleComplication:(id)a0 layoutType:(long long)a1 complications:(id)a2;

@end
