@interface MnemonicRepresentation : NSObject

+ (id)potentialWords:(id)a0;
+ (id)entropyFromMnemonic:(id)a0;
+ (id)mnemonicFrom:(id)a0;
+ (id)mnemonicWordList;
+ (id)seedFromMnemonic:(id)a0;
+ (id)textfieldAutoCompleteBuilder:(id)a0 forNextLetter:(id)a1;

@end
