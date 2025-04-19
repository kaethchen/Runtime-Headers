@class NSString, ARPHomeControlCorrelationUtilities, ARPHomeControlSuggester;

@interface ARPHomeControlNextActionCorrelationTask : NSObject

@property (readonly, copy, nonatomic) NSString *file;
@property (retain, nonatomic) ARPHomeControlCorrelationUtilities *utilities;
@property (retain, nonatomic) ARPHomeControlSuggester *suggester;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithCorrelationsFile:(id)a0;

@end
