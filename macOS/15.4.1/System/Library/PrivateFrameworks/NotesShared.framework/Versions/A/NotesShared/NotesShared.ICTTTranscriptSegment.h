@class NSDictionary, NSString, NSNumber;

@interface NotesShared.ICTTTranscriptSegment : ICCRObject

@property (class, nonatomic, readonly) NSDictionary *CRProperties;

@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSNumber *timestamp;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSString *speaker;

- (id)initWithIdentity:(id)a0 fields:(id)a1;
- (id)initWithICCRCoder:(id)a0;

@end
