@class NSArray;

@interface MSGetMailIntentResponse : INIntentResponse

@property long long code;
@property (copy, nonatomic) NSArray *mails;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
