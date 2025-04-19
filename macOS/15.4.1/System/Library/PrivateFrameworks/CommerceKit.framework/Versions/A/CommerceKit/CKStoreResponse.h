@class CKStoreAction, NSString, NSDictionary, NSData, NSError, CKDialog;

@interface CKStoreResponse : NSObject <NSCopying, NSSecureCoding> {
    NSString *_MIMEType;
    NSDictionary *_bodyPlist;
    long long _httpStatusCode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *headers;
@property (readonly, nonatomic) NSData *body;
@property (readonly, nonatomic) NSDictionary *bodyPlist;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) CKDialog *dialog;
@property (readonly, nonatomic) CKStoreAction *action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithURLResponse:(id)a0 body:(id)a1;

@end
