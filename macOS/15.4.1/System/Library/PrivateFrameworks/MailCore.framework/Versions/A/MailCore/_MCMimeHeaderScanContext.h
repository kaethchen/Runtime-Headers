@class NSMutableData, MCMimePart;

@interface _MCMimeHeaderScanContext : NSObject

@property (nonatomic) const char *current;
@property (nonatomic) const char *end;
@property (nonatomic) unsigned long long encodingHint;
@property (retain, nonatomic) NSMutableData *dataBuf;
@property (retain, nonatomic) MCMimePart *mimePart;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;

@end
