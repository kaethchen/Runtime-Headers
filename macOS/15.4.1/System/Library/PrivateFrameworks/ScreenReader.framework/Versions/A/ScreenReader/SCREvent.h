@class NSSet, SCRKeyboardKey, SCRCIndexMap;

@interface SCREvent : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    SCRKeyboardKey *_key;
    NSSet *_commands;
    unsigned long long _modifier;
    double _creationTime;
    SCRCIndexMap *_info;
    long long _priority;
    unsigned long long _keyRepeatCount;
    struct __flags { unsigned char isModalEvent : 1; unsigned char isKeyRepeatEvent : 1; unsigned char isEndingEvent : 1; } _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long insertionPointAffinity;
@property (nonatomic) BOOL isKeyRepeatEvent;
@property (readonly, nonatomic) unsigned long long keyRepeatCount;
@property (readonly, nonatomic) BOOL isNavigationEvent;
@property (nonatomic) BOOL isModalEvent;
@property (nonatomic) BOOL isEndingEvent;

+ (id)_tagTitleMap;
+ (id)titleForTag:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (void)setTag:(long long)a0;
- (id)info;
- (id)argument;
- (long long)priority;
- (id)key;
- (unsigned long long)modifier;
- (id)initWithType:(long long)a0;
- (long long)searchDirection;
- (long long)tag;
- (id)commands;
- (void)setCommands:(id)a0;
- (double)creationTime;
- (BOOL)containsCommand:(id)a0;
- (long long)commandDirection;
- (BOOL)isGestureEvent;
- (id)outputString;
- (BOOL)containsTag:(long long)a0;
- (void)setGuideTarget:(id)a0;
- (id)argumentString;
- (long long)compareByPriorityAndDate:(id)a0;
- (BOOL)containsCharacters:(id)a0;
- (BOOL)containsCommand:(id)a0 isEndingEvent:(BOOL)a1;
- (BOOL)containsCommandInCategory:(id)a0;
- (BOOL)containsKeyIgnoringCount:(id)a0;
- (BOOL)containsModifier:(unsigned long long)a0;
- (id)guideAction;
- (id)guideTarget;
- (void)incrementKeyRepeatCount;
- (id)initActivatorEventWithKey:(id)a0 modifier:(unsigned long long)a1 info:(id)a2 priority:(long long)a3;
- (id)initEchoEventWithKey:(id)a0 modifier:(unsigned long long)a1 info:(id)a2 priority:(long long)a3;
- (id)initGuideEventWithTarget:(id)a0 action:(id)a1 tag:(long long)a2 info:(id)a3 priority:(long long)a4;
- (id)initOutputEventWithString:(id)a0 info:(id)a1 priority:(long long)a2;
- (id)initTagEventWithTag:(long long)a0 key:(id)a1 modifier:(unsigned long long)a2 info:(id)a3 priority:(long long)a4;
- (id)initWithType:(long long)a0 key:(id)a1 modifier:(unsigned long long)a2 info:(id)a3 priority:(long long)a4;
- (BOOL)isActivatorEvent;
- (BOOL)isDFROriginatedEvent;
- (BOOL)isEchoEvent;
- (BOOL)isGuideEvent;
- (BOOL)isGuideEventForTarget:(id)a0;
- (BOOL)isInvertedTEvent;
- (BOOL)isOutputEvent;
- (BOOL)isQuickNavSelectionEvent;
- (BOOL)isTagEvent;
- (long long)searchIdentifierKey;
- (struct { long long x0; long long x1; })searchValues;
- (void)setInfoObject:(id)a0 forIndex:(unsigned int)a1;
- (void)setKeyRepeatCount:(unsigned long long)a0;

@end
