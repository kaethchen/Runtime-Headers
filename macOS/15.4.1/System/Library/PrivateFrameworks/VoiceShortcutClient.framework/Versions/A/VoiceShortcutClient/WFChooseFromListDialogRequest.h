@class WFDialogButton, NSArray, NSString, NSXPCConnection, WFListDisplayConfiguration, NSXPCListenerEndpoint;
@protocol WFDialogListItemStore;

@interface WFChooseFromListDialogRequest : WFDialogRequest

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *emptyStateMessage;
@property (retain, nonatomic) WFListDisplayConfiguration *displayConfiguration;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;
@property (retain, nonatomic) NSXPCListenerEndpoint *dataStoreEndpoint;
@property (readonly, nonatomic) id<WFDialogListItemStore> dataStore;
@property (readonly, copy, nonatomic) NSString *parameterKey;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItems:(id)a0 allowsMultipleSelection:(BOOL)a1 message:(id)a2 attribution:(id)a3 prompt:(id)a4 parameterKey:(id)a5;
- (id)requestByCompactingRequest;

@end
