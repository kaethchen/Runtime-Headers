@class NLXSchemaCDMUserAcknowledged, NLXSchemaCDMUserStatedTask, NLXSchemaCDMUserWantedToUndo, NLXSchemaCDMUserWantedToProceed, USOSchemaUSOGraph, NLXSchemaCDMUserAccepted, NLXSchemaCDMUserWantedToRepeat, USOSchemaUSOUtteranceAlignment, NLXSchemaCDMDelegatedUserDialogAct, NLXSchemaCDMUserWantedToPause, NLXSchemaCDMUserRejected, NSData, NLXSchemaCDMUserCancelled;

@interface NLXSchemaCDMUserDialogAct : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOUtteranceAlignment *alignment;
@property (nonatomic) BOOL hasAlignment;
@property (retain, nonatomic) USOSchemaUSOGraph *reference;
@property (nonatomic) BOOL hasReference;
@property (retain, nonatomic) NLXSchemaCDMUserAccepted *accepted;
@property (nonatomic) BOOL hasAccepted;
@property (retain, nonatomic) NLXSchemaCDMUserRejected *rejected;
@property (nonatomic) BOOL hasRejected;
@property (retain, nonatomic) NLXSchemaCDMUserCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToRepeat *wantedToRepeat;
@property (nonatomic) BOOL hasWantedToRepeat;
@property (retain, nonatomic) NLXSchemaCDMUserAcknowledged *acknowledged;
@property (nonatomic) BOOL hasAcknowledged;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToProceed *wantedToProceed;
@property (nonatomic) BOOL hasWantedToProceed;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToPause *wantedToPause;
@property (nonatomic) BOOL hasWantedToPause;
@property (retain, nonatomic) NLXSchemaCDMDelegatedUserDialogAct *delegated;
@property (nonatomic) BOOL hasDelegated;
@property (retain, nonatomic) NLXSchemaCDMUserStatedTask *userStatedTask;
@property (nonatomic) BOOL hasUserStatedTask;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToUndo *wantedToUndo;
@property (nonatomic) BOOL hasWantedToUndo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichUserdialogacttype;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAlignment;
- (void)deleteDelegated;
- (void)deleteReference;
- (void)deleteAccepted;
- (void)deleteAcknowledged;
- (void)deleteRejected;
- (void)deleteUserStatedTask;
- (void)deleteWantedToPause;
- (void)deleteWantedToProceed;
- (void)deleteWantedToRepeat;
- (void)deleteWantedToUndo;
- (id)suppressMessageUnderConditions;

@end
