@class NSString, NSData, NSNumber;

@interface BMDistributedContextTranslatedEventMessage : NSObject

@property (retain, nonatomic) NSString *streamIdentifier;
@property (retain, nonatomic) NSData *eventData;
@property (retain, nonatomic) NSNumber *eventDataVersion;

- (void).cxx_destruct;
- (id)initWithStreamIdentifier:(id)a0 eventData:(id)a1 eventDataVersion:(id)a2;

@end
