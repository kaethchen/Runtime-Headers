@class NSString, NSArray, CLSActivity, NSURL, NSSet;

@interface CLSContext : CLSObject <CLSRelationable> {
    BOOL _active;
    NSURL *_universalLinkURL;
    NSString *_title;
    NSString *_topic;
    NSString *_currentActivityID;
    NSString *_contentStoreIdentifier;
    long long _displayOrder;
    NSString *_summary;
    NSString *_customTypeName;
    struct _NSRange { unsigned long long location; unsigned long long length; } _suggestedAge;
    struct _NSRange { unsigned long long location; unsigned long long length; } _suggestedCompletionTime;
}

@property (readonly, nonatomic) CLSActivity *currentActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *stableObjectID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *path;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *storeTeamID;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (copy, nonatomic) NSString *currentActivityID;
@property (nonatomic) long long authorizationStatus;
@property (readonly, copy, nonatomic) NSArray *identifierPath;
@property (retain, nonatomic) NSURL *universalLinkURL;
@property (copy, nonatomic) NSString *customTypeName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long displayOrder;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic, getter=isAssignable) BOOL assignable;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } suggestedAge;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } suggestedCompletionTime;
@property (readonly, copy, nonatomic) NSSet *progressReportingCapabilities;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic) struct CGImage { } *thumbnail;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (BOOL)conformsToProtocol:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)objectIDPathFromIdentifierPath:(id)a0;
+ (id)allowedTopics;
+ (id)arrayOfStringClasses;
+ (id)defaultProgressReportingCapability;
+ (id)objectIDForIdentifierPath:(id)a0;
+ (id)relations;
+ (id)reservedContextTypes;
+ (id)stableObjectIDForIdentifierPath:(id)a0;
+ (id)stableObjectIDPathFromIdentifierPath:(id)a0;
+ (id)validatedContextIdentifierPathFromPath:(id)a0;

- (BOOL)conformsToProtocol:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)removeFromParent;
- (BOOL)validateObject:(id *)a0;
- (id)_navigationNodes;
- (id)_progressReportingCapabilities;
- (void)_setType:(long long)a0 identifier:(id)a1 title:(id)a2;
- (void)addChildContext:(id)a0;
- (void)addNavigationChildContext:(id)a0;
- (void)addProgressReportingCapabilities:(id)a0;
- (void)becomeActive;
- (id)childContextWithIdentifier:(id)a0;
- (id)createNewActivity;
- (void)descendantMatchingIdentifierPath:(id)a0 completion:(id /* block */)a1;
- (long long)effectiveAuthorizationStatus;
- (id)initWithInternalType:(long long)a0 identifier:(id)a1 title:(id)a2;
- (id)initWithType:(long long)a0 identifier:(id)a1 title:(id)a2;
- (void)mergeWithObject:(id)a0;
- (id)navigationChildContexts;
- (void)removeNavigationChildContext:(id)a0;
- (void)resetProgressReportingCapabilities;
- (void)resetProgressReportingCapabilities_unprotected;
- (void)resignActive;
- (void)setIdentifierPathAndGenerateObjectID:(id)a0;
- (id)thumbnailBlob;
- (id)thumbnailBlobs;

@end
