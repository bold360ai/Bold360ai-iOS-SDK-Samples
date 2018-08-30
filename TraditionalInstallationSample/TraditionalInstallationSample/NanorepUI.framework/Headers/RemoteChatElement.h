
// NanorepUI version number: v1.7.0.rc10 

// ===================================================================================================
// Copyright © 2018 bold360ai(LogMeIn).
// NanorepUI SDK.
// All rights reserved.
// ===================================================================================================

#import <Foundation/Foundation.h>
#import "ContentChatElement.h"
#import <NanorepEngine/NRConversationalResponse.h>

@interface RemoteChatElement: ContentChatElement

- (instancetype)initWithRespone:(NRConversationalResponse *)response agentType:(AgentType)agentType;

@end