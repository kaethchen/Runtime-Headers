@class NSString;

@interface _EARVoiceCommandDebugInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *precedingUtterance;
@property (readonly, nonatomic) NSString *commandUtterance;
@property (readonly, nonatomic) NSString *target;
@property (readonly, nonatomic) NSString *payload;
@property (readonly, nonatomic) BOOL hasVoiceCommandInExhaustiveParses;
@property (readonly, nonatomic) BOOL hasVoiceCommandParses;
@property (readonly, nonatomic) BOOL hasVoiceCommandEditIntent;
@property (readonly, nonatomic) BOOL hasVoiceCommandAfterReranking;
@property (readonly, nonatomic) BOOL hasNoVoiceCommandAfterRespeakCheck;
@property (readonly, nonatomic) unsigned long long commandParserMachContinuousStartTicks;
@property (readonly, nonatomic) unsigned long long commandParserMachContinuousEndTicks;
@property (readonly, nonatomic) unsigned long long commandParserMachAbsoluteStartTicks;
@property (readonly, nonatomic) unsigned long long commandParserMachAbsoluteEndTicks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPrecedingUtterance:(id)a0 commandUtterance:(id)a1 target:(id)a2 payload:(id)a3 hasVoiceCommandInExhaustiveParses:(BOOL)a4 hasVoiceCommandParses:(BOOL)a5 hasVoiceCommandEditIntent:(BOOL)a6 hasVoiceCommandAfterReranking:(BOOL)a7 hasNoVoiceCommandAfterRespeakCheck:(BOOL)a8 commandParserMachContinuousStartTicks:(unsigned long long)a9 commandParserMachContinuousEndTicks:(unsigned long long)a10 commandParserMachAbsoluteStartTicks:(unsigned long long)a11 commandParserMachAbsoluteEndTicks:(unsigned long long)a12;

@end
