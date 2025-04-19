@class NSArray;

@interface EDIndexedItems : NSObject {
    void /* unknown type, empty encoding */ messages;
    void /* unknown type, empty encoding */ updatedMessages;
    void /* unknown type, empty encoding */ dataDetectionItems;
    void /* unknown type, empty encoding */ attachments;
    void /* unknown type, empty encoding */ richLinks;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ count;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) NSArray *updatedMessages;
@property (nonatomic, readonly) NSArray *dataDetectionItems;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *richLinks;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIndexedItems:(id)a0;

@end
