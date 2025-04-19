@class NSArray, NSString, NSDate;

@interface LiveSpeechPhrase : NSObject {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ categoryID;
    void /* unknown type, empty encoding */ inputID;
    void /* unknown type, empty encoding */ anyCreationDate;
}

@property (class, nonatomic, readonly) NSArray *phrases;
@property (class, nonatomic) long long maxPreferredPhraseCount;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *categoryID;
@property (nonatomic, copy) NSString *inputID;
@property (nonatomic, copy) NSDate *creationDate;

+ (id)makeEmptyPhrase;
+ (BOOL)updatePhrase:(id)a0 categoryID:(id)a1 withUpdatedText:(id)a2 error:(id *)a3;
+ (BOOL)updatePhrase:(id)a0 fromCategory:(id)a1 toCategory:(id)a2 error:(id *)a3;
+ (id)observeChanges:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;

@end
