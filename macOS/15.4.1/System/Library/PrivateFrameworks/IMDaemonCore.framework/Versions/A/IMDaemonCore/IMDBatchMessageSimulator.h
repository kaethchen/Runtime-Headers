@class NSArray;

@interface IMDBatchMessageSimulator : NSObject {
    void /* unknown type, empty encoding */ messages;
    void /* unknown type, empty encoding */ batch;
}

@property (nonatomic, readonly) NSArray *messages;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessages:(id)a0;
- (BOOL)runWithError:(id *)a0;

@end
