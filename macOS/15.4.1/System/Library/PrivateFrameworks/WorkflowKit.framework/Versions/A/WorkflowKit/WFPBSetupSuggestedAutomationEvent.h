@class NSString;

@interface WFPBSetupSuggestedAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char currentStep : 1; unsigned char completed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasSuggestedAutomationIdentifier;
@property (retain, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) BOOL hasCurrentStep;
@property (nonatomic) unsigned int currentStep;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
