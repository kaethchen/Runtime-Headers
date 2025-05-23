@class NSDictionary, NSMutableDictionary, NSSet;

@interface AXSSKeyboardCommandMap : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *keyChordsToCommands;
@property (readonly, nonatomic) NSDictionary *commandsToArraysOfKeyChords;
@property (readonly, nonatomic) NSDictionary *userDefinedCommandsToKeyChords;
@property (readonly, nonatomic) NSMutableDictionary *transientCommands;
@property (retain, nonatomic) NSSet *availableCommands;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initializeDictionariesIfNeeded;
- (id)_initWithCommandsToKeyChordsDictionary:(id)a0;
- (BOOL)_isAvailableCommand:(id)a0;
- (BOOL)_validateCommandsToKeyChords:(id)a0;
- (id)addCommandsForTransientKeyChords:(id)a0;
- (id)commandForKeyChord:(id)a0;
- (id)commandMapWithKeyChord:(id)a0 forCommand:(id)a1;
- (BOOL)isEqualToCommandMap:(id)a0;
- (id)keyChordForCommand:(id)a0;
- (void)removeTransientKeyChordsForIdentifier:(id)a0;

@end
