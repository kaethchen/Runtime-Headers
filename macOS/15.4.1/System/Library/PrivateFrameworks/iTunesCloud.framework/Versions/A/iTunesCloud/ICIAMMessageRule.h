@class NSString, NSMutableArray, ICIAMTriggerCondition;

@interface ICIAMMessageRule : PBCodable <NSCopying> {
    struct { unsigned char ruleOperator : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasRuleOperator;
@property (nonatomic) int ruleOperator;
@property (retain, nonatomic) NSMutableArray *subrules;
@property (readonly, nonatomic) BOOL hasTriggerCondition;
@property (retain, nonatomic) ICIAMTriggerCondition *triggerCondition;
@property (readonly, nonatomic) BOOL hasTriggerEventName;
@property (retain, nonatomic) NSString *triggerEventName;
@property (readonly, nonatomic) BOOL hasRequiredApplicationContextBundleIdentifier;
@property (retain, nonatomic) NSString *requiredApplicationContextBundleIdentifier;

+ (Class)subrulesType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsRuleOperator:(id)a0;
- (void)addSubrules:(id)a0;
- (void)clearSubrules;
- (id)ruleOperatorAsString:(int)a0;
- (id)subrulesAtIndex:(unsigned long long)a0;
- (unsigned long long)subrulesCount;

@end
