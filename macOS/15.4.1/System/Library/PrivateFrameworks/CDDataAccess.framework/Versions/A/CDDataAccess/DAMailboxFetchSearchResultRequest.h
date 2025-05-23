@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject

@property (copy, nonatomic) NSString *longID;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *serverID;
@property (nonatomic) int bodyFormat;
@property (nonatomic) int maxSize;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initRequestForBodyFormat:(int)a0 withFolderID:(id)a1 withServerID:(id)a2 withLongID:(id)a3 withBodySizeLimit:(int)a4;
- (id)initRequestForBodyFormat:(int)a0 withLongID:(id)a1 withBodySizeLimit:(int)a2;

@end
