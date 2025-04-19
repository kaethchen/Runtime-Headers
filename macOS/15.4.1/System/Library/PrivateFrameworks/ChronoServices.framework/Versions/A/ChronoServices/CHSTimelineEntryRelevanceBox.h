@class NSDictionary, NSData;

@interface CHSTimelineEntryRelevanceBox : NSObject <CHSXPCEncodable, NSCopying> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *timelineRelevanceEntries;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntries:(id)a0;
- (void)prepareForEncoding;

@end
