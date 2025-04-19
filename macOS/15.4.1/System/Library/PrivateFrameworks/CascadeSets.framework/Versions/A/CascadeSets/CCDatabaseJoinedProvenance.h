@class CCProvenanceRecord, NSData;

@interface CCDatabaseJoinedProvenance : NSObject

@property (readonly, nonatomic) CCProvenanceRecord *provenance;
@property (readonly, nonatomic) NSData *contentData;
@property (readonly, nonatomic) NSData *metaContentData;

+ (id)joinedProvenanceFromDatabaseValueRow:(id)a0;

- (void).cxx_destruct;
- (id)initWithProvenance:(id)a0 contentData:(id)a1 metaContentData:(id)a2;

@end
