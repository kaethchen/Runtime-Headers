@class NSString, NSDate;

@interface WBSLPLinkMetadataInfo : NSObject

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, copy, nonatomic) NSDate *lastFetchDate;
@property (readonly, nonatomic) BOOL lastFetchDidSucceed;
@property (readonly, nonatomic) BOOL metadataHasImage;

- (void).cxx_destruct;
- (id)initWithSQLiteRow:(id)a0;
- (id)copyWithoutUUID;
- (id)initWithURLString:(id)a0 uuidString:(id)a1 lastFetchDate:(id)a2 lastFetchDidSucceed:(BOOL)a3 metadataHasImage:(BOOL)a4;

@end
