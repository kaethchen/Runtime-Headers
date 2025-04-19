@class NSMutableData, ICNFMCMimePart;

@interface ICNFMCMimeHeaderScanContext : NSObject

@property (nonatomic) const char *current;
@property (nonatomic) const char *end;
@property (nonatomic) unsigned long long encodingHint;
@property (retain, nonatomic) NSMutableData *dataBuf;
@property (retain, nonatomic) ICNFMCMimePart *mimePart;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;

@end
