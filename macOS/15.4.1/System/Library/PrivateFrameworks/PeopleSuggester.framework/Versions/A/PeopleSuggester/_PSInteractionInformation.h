@class NSString, NSDictionary;

@interface _PSInteractionInformation : NSObject {
    NSString *_accountHandle;
    NSDictionary *_interactionInfo;
}

- (void).cxx_destruct;
- (id)handle;
- (id)interactionInformation;
- (id)initWithHandle:(id)a0 interactionInformation:(id)a1;

@end
