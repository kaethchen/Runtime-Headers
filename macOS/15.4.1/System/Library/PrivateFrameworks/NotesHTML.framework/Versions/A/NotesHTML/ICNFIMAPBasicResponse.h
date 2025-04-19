@class NSData, NSString;

@interface ICNFIMAPBasicResponse : ICNFIMAPResponse {
    NSData *_userData;
}

@property (nonatomic) long long responseCode;
@property (retain, nonatomic) id responseInfo;
@property (copy, nonatomic) NSData *userData;
@property (readonly, copy, nonatomic) NSString *userString;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (const char *)_responseName;

@end
