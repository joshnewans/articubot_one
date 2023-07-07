import { encodePacket, encodePacketToBinary } from "./encodePacket.js";
import { decodePacket } from "./decodePacket.js";
import { Packet, PacketType, RawData, BinaryType } from "./commons.js";
declare const encodePayload: (packets: Packet[], callback: (encodedPayload: string) => void) => void;
declare const decodePayload: (encodedPayload: string, binaryType?: BinaryType) => Packet[];
export declare function decodePacketFromBinary(data: Uint8Array, isBinary: boolean, binaryType: BinaryType): Packet;
export declare const protocol = 4;
export { encodePacket, encodePacketToBinary, encodePayload, decodePacket, decodePayload, Packet, PacketType, RawData, BinaryType };
