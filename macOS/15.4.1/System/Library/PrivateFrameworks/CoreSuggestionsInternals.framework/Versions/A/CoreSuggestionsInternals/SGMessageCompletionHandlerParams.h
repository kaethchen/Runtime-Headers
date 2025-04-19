@class NSError, SGRealtimeSuggestionsTuple;

@interface SGMessageCompletionHandlerParams : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SGRealtimeSuggestionsTuple *tuple;

- (void).cxx_destruct;
- (id)initWithError:(id)a0 foundContacts:(id)a1 foundEvents:(id)a2 invalidatedMessageIdentifiers:(id)a3;

@end
