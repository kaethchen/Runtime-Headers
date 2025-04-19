@class NSData, NSError, NSArray, NSURL, NSString, NSMutableDictionary, NSDictionary, MUIRemoteImageCollector, MEDecodedMessageBanner;

@interface MUIWebDocument : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_jsDocumentContext;
    NSMutableDictionary *_urlsWhichFailedToLoadThroughProxy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *baseURL;
@property (readonly, copy, nonatomic) NSDictionary *jsDocumentContext;
@property (copy, nonatomic) NSDictionary *dataDetectorsContext;
@property (retain, nonatomic) NSError *smimeError;
@property (nonatomic) BOOL hasBlockedMessageContent;
@property (nonatomic) long long messageContentTypeToBlock;
@property (readonly, copy, nonatomic) NSArray *urlsWhichFailedToLoadThroughProxy;
@property (readonly, nonatomic) long long urlsProxyFailureReason;
@property (nonatomic) BOOL directlyLoadURLsWhichFailedToLoadThroughProxy;
@property (retain, nonatomic) MUIRemoteImageCollector *remoteImageCollector;
@property (nonatomic) unsigned long long originalEncoding;
@property (copy, nonatomic) NSArray *signers;
@property (copy, nonatomic) NSArray *signerNames;
@property (copy, nonatomic) NSString *decoderID;
@property (nonatomic) BOOL isEncrypted;
@property (nonatomic) BOOL hasEncryptedDescendantPart;
@property (nonatomic) BOOL isSigned;
@property (copy, nonatomic) NSData *decodedMessageContext;
@property (copy, nonatomic) MEDecodedMessageBanner *decodedMessageBanner;
@property (nonatomic) BOOL extensionRequestedContentBlocking;
@property (copy, nonatomic) NSString *localizedRemoteContentBlockingReason;
@property (nonatomic) BOOL disallowUsersToLoadRemoteContent;
@property (copy, nonatomic) NSString *html;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic) long long imageScale;
@property (nonatomic) Class webAttachmentClass;
@property (copy, nonatomic) id /* block */ URLClickObserver;
@property (copy, nonatomic) NSString *hideMyEmailRecipientAddress;
@property (copy, nonatomic) id /* block */ URLRequestObserver;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_defaultDocumentHTML;
- (void)_muiWebDocumentCommonInit;
- (void)addURLWhichFailedToLoadThroughProxy:(id)a0 failureReason:(long long)a1;
- (id)attachmentForContentID:(id)a0;
- (void)clearURLsWhichFailedToLoadThroughProxy;
- (void)setValueInJsDocumentContext:(id)a0 forKey:(id)a1;

@end
