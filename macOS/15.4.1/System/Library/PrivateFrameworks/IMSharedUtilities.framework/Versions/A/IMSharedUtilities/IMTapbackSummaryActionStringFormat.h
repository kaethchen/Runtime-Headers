@class NSString;

@interface IMTapbackSummaryActionStringFormat : NSObject

@property (readonly, nonatomic) NSString *actionStringFormat;
@property (readonly, nonatomic) BOOL requiresReactionReplacment;

- (void).cxx_destruct;
- (id)initWithActionStringFormat:(id)a0 requiresReactionReplacment:(BOOL)a1;

@end
