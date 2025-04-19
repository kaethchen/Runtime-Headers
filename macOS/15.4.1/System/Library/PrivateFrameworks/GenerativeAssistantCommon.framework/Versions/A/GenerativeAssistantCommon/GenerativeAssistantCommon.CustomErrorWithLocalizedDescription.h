@class NSString;

@interface GenerativeAssistantCommon.CustomErrorWithLocalizedDescription : NSError {
    void /* unknown type, empty encoding */ errorDomain;
    void /* unknown type, empty encoding */ errorCode;
    void /* unknown type, empty encoding */ errorDescription;
}

@property (nonatomic, readonly) NSString *localizedDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
